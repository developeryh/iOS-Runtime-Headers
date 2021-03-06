/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReportSpamChatItem : CKStampChatItem {
    NSAttributedString * _transcriptButtonText;
}

@property (nonatomic, copy) NSAttributedString *transcriptButtonText;

- (void).cxx_destruct;
- (Class)cellClass;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setTranscriptButtonText:(id)arg1;
- (id)transcriptButtonText;
- (id)transcriptTextForSpam:(BOOL)arg1;

@end
