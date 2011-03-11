/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSCondition;

@interface AVCallbackHandler : NSObject  {
    id _target;
    SEL _action;
    SEL _mainThreadAction;
    NSCondition *_condition;
    id _params;
}

@property SEL mainThreadAction;
@property SEL action;
@property id target;


- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (id)init;
- (void)dealloc;
- (void)setTarget:(id)arg1;
- (SEL)mainThreadAction;
- (void)setCallbackParams:(id)arg1;
- (id)waitForCallbackParams;
- (BOOL)hasParams;
- (void)setMainThreadAction:(SEL)arg1;

@end