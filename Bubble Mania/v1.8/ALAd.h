/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ALAdSize, ALAdType, NSNumber, NSString;

@interface ALAd : NSObject <NSCopying> {

	ALAdSize* _size;
	ALAdType* _type;
	NSNumber* _adIdNumber;
	NSString* _htmlSource;
	NSString* _videoFilename;
	NSNumber* _countdownLength;
	NSNumber* _videoCloseDelay;
	NSNumber* _graphicCloseDelay;
	NSString* _clcode;
	unsigned long long _closeButtonStyle;
	unsigned long long _presentationMode;
	unsigned long long _target;

}

@property (nonatomic,retain) ALAdSize * size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) ALAdType * type;                                  //@synthesize type=_type - In the implementation block
@property (getter=isVideoAd,readonly) BOOL videoAd; 
@property (nonatomic,retain) NSNumber * adIdNumber;                            //@synthesize adIdNumber=_adIdNumber - In the implementation block
@property (getter=size,readonly) ALAdSize * adSize; 
@property (getter=type,readonly) ALAdType * adType; 
@property (nonatomic,retain) NSString * htmlSource;                            //@synthesize htmlSource=_htmlSource - In the implementation block
@property (nonatomic,retain) NSString * videoFilename;                         //@synthesize videoFilename=_videoFilename - In the implementation block
@property (nonatomic,retain) NSNumber * countdownLength;                       //@synthesize countdownLength=_countdownLength - In the implementation block
@property (nonatomic,retain) NSNumber * videoCloseDelay;                       //@synthesize videoCloseDelay=_videoCloseDelay - In the implementation block
@property (nonatomic,retain) NSNumber * graphicCloseDelay;                     //@synthesize graphicCloseDelay=_graphicCloseDelay - In the implementation block
@property (nonatomic,retain) NSString * clcode;                                //@synthesize clcode=_clcode - In the implementation block
@property (assign,nonatomic) unsigned long long closeButtonStyle;              //@synthesize closeButtonStyle=_closeButtonStyle - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) unsigned long long target;                        //@synthesize target=_target - In the implementation block
-(NSNumber *)adIdNumber;
-(void)setCloseButtonStyle:(unsigned long long)arg1 ;
-(NSString *)htmlSource;
-(void)setHtmlSource:(NSString *)arg1 ;
-(NSNumber *)countdownLength;
-(void)setCountdownLength:(NSNumber *)arg1 ;
-(NSNumber *)videoCloseDelay;
-(void)setVideoCloseDelay:(NSNumber *)arg1 ;
-(NSNumber *)graphicCloseDelay;
-(void)setGraphicCloseDelay:(NSNumber *)arg1 ;
-(NSString *)videoFilename;
-(void)setVideoFilename:(NSString *)arg1 ;
-(void)setAdIdNumber:(NSNumber *)arg1 ;
-(void)setClcode:(NSString *)arg1 ;
-(unsigned long long)closeButtonStyle;
-(BOOL)isEqualToAd:(id)arg1 ;
-(BOOL)isVideoAd;
-(NSString *)clcode;
-(ALAdSize *)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTarget:(unsigned long long)arg1 ;
-(void)setType:(ALAdType *)arg1 ;
-(ALAdType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)target;
-(void)setSize:(ALAdSize *)arg1 ;
-(unsigned long long)presentationMode;
-(void)setPresentationMode:(unsigned long long)arg1 ;
@end
