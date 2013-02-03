/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAABSource : SADomainObject {
}

@property(copy) NSString * accountIdentifier;
@property(copy) NSString * accountName;
@property(retain) NSNumber * remote;

+ (id)source;
+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountIdentifier;
- (id)accountName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)remote;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setRemote:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end