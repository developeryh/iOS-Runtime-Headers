/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {
    TSDLayoutController * mLayoutController;
    TSURetainedPointerKeyDictionary * mShiftedObjects;
    BOOL  mSupportsAdaptiveLayout;
}

- (struct CGPoint { float x1; float x2; })adjustMappingPointForInfo:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (void)beginDynamicAdaptiveLayout;
- (id)childLayoutsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clippedRectInRoot:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)endDynamicAdaptiveLayout;
- (id)initWithLayoutController:(id)arg1;
- (BOOL)isRootLayoutForInspectorGeometry;
- (BOOL)isSavedShiftForInfo:(id)arg1 equalToOffset:(struct CGPoint { float x1; float x2; })arg2;
- (id)layoutController;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)p_shiftedObjects;
- (BOOL)providesGuidesForChildLayouts;
- (void)resetLayout:(id)arg1 forInfo:(id)arg2;
- (void)updateRootLayoutShiftFor:(id)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;

@end
