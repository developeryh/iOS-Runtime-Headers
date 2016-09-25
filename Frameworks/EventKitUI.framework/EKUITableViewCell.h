/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUITableViewCell : UITableViewCell {
    BOOL  _drawsOwnRowSeparators;
    UIColor * _rowSeparatorColor;
    UIVisualEffectView * _rowSeparatorParentView;
    UIVisualEffect * _rowSeparatorVisualEffect;
    RowSeparatorView * _separatorViewForNonOpaqueTables;
    BOOL  _usesInsetMargin;
}

@property (nonatomic) BOOL drawsOwnRowSeparators;
@property (nonatomic, retain) UIColor *rowSeparatorColor;
@property (nonatomic, retain) UIVisualEffect *rowSeparatorVisualEffect;
@property (nonatomic) BOOL usesInsetMargin;

+ (id)reuseIdentifier;
+ (float)rowSeparatorThickness;
+ (BOOL)vibrant;

- (void).cxx_destruct;
- (void)_layoutSeparator;
- (void)_setMarginExtendsToFullWidth:(BOOL)arg1;
- (BOOL)drawsOwnRowSeparators;
- (void)layoutSubviews;
- (id)rowSeparatorColor;
- (id)rowSeparatorVisualEffect;
- (void)setDrawsOwnRowSeparators:(BOOL)arg1;
- (void)setRowSeparatorColor:(id)arg1;
- (void)setRowSeparatorVisualEffect:(id)arg1;
- (void)setUsesInsetMargin:(BOOL)arg1;
- (BOOL)usesInsetMargin;

@end