/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSData, NSMutableArray, EKEventStore;

@interface EKICSPreviewModel : NSObject  {
    NSData *_data;
    EKEventStore *_tempStore;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    NSMutableArray *_unimportedEvents;
}

@property(readonly) EKEventStore * eventStore;
@property(readonly) int totalEventCount;
@property(readonly) int importedEventCount;
@property(readonly) int unimportedEventCount;
@property(readonly) NSArray * importedEvents;
@property(readonly) NSArray * unimportedEvents;
@property(readonly) NSArray * allEvents;


- (id)eventStore;
- (void)dealloc;
- (id)allEvents;
- (int)importedEventCount;
- (id)importedEvents;
- (id)unimportedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (int)unimportedEventCount;
- (int)totalEventCount;
- (id)importAllIntoCalendar:(id)arg1;

@end