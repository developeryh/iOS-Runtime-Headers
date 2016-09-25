/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int minutesUntilEvent : 1; 
    }  _has;
    double  _minutesUntilEvent;
}

@property (nonatomic) BOOL hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMinutesUntilEvent;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minutesUntilEvent;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMinutesUntilEvent:(BOOL)arg1;
- (void)setMinutesUntilEvent:(double)arg1;
- (void)writeTo:(id)arg1;

@end