/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKNoiseModifier : NSObject <GKNoiseModule> {
    NSMutableArray * _inputModules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned int)arg1;
- (id)inputModuleAtIndex:(int)arg1;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (double)valueAt;

@end
