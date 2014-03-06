@protocol NSAnsing
- (void) anse;
@end

@interface NSObject
+ (NSObject*) alloc;
- (NSObject*) init;
+ (NSObject*) new;
+ (void) load;
@property Class classProp;
@property Class<NSAnsing> qualifiedClassProp;
@end

#define NS_RETURNS_RETAINED __attribute__((ns_returns_retained))
#define NS_CONSUMES_SELF __attribute__((ns_consumes_self))
#define NS_CONSUMED __attribute__((ns_consumed))

struct Rect {
  float x;
  float y;
  float width;
  float height;
};

struct NSRect {
  struct NSPoint {
    double x;
    double y;
  } origin;
  struct NSSize {
    double width;
    double height;
  } size;
};

typedef long NSInteger;

@interface Gizmo : NSObject
- (Gizmo*) clone NS_RETURNS_RETAINED;
- (Gizmo*) duplicate;
- (Gizmo*) initWithBellsOn:(NSInteger)x;
- (void) fork NS_CONSUMES_SELF;
- (void) enumerateSubGizmos: (void (^)(Gizmo*))f;
+ (void) consume: (NS_CONSUMED Gizmo*) gizmo;
+ (void) inspect: (Gizmo*) gizmo;
+ (void) runWithRect: (struct Rect) rect andGizmo: (Gizmo*) gizmo;
- (struct NSRect) frame;
- (void) setFrame: (struct NSRect) rect;
- (void) frob;
+ (void) runce;
- (void) funge;
@property void (^block)(void);
@property NSInteger count;
@end

@interface NSString : NSObject
@end

@interface NSView : NSObject
- (struct NSRect) convertRectFromBase: (struct NSRect) r;
@end

#define CF_ENUM(_type, _name) enum _name : _type _name; enum _name : _type
#define NS_ENUM(_type, _name) CF_ENUM(_type, _name)

struct NSRect NSMakeRect(double, double, double, double);
struct NSRect NSInsetRect(struct NSRect, double, double);
NSString *NSStringFromRect(struct NSRect r);

typedef  NS_ENUM(NSInteger, NSRuncingOptions) {
  NSRuncingMince = 123,
  NSRuncingQuinceSliced = 4567,
  NSRuncingQuinceJulienned = 5678,
  NSRuncingQuinceDiced = 6789
};

