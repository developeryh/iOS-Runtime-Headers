/* Generated by RuntimeBrowser.
 */

@protocol PUInterruptibleViewControllerTransition <NSObject>

@required

- (BOOL)isTransitionPaused;
- (void)pauseTransition;
- (void)resumeTransition:(BOOL)arg1;
- (void)updatePausedTransitionWithProgress:(float)arg1 interactionProgress:(float)arg2;

@end