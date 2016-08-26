/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AMMRProperty.h>

@interface AMMRSupportsProperty : AMMRProperty {

	BOOL _supportsSms;
	BOOL _supportsTel;
	BOOL _supportsCalendar;
	BOOL _supportsStorePicture;
	BOOL _supportsInlineVideo;

}

@property (assign,nonatomic) BOOL supportsSms;                       //@synthesize supportsSms=_supportsSms - In the implementation block
@property (assign,nonatomic) BOOL supportsTel;                       //@synthesize supportsTel=_supportsTel - In the implementation block
@property (assign,nonatomic) BOOL supportsCalendar;                  //@synthesize supportsCalendar=_supportsCalendar - In the implementation block
@property (assign,nonatomic) BOOL supportsStorePicture;              //@synthesize supportsStorePicture=_supportsStorePicture - In the implementation block
@property (assign,nonatomic) BOOL supportsInlineVideo;               //@synthesize supportsInlineVideo=_supportsInlineVideo - In the implementation block
+(id)defaultProperty;
-(void)setSupportsSms:(BOOL)arg1 ;
-(void)setSupportsTel:(BOOL)arg1 ;
-(void)setSupportsCalendar:(BOOL)arg1 ;
-(void)setSupportsStorePicture:(BOOL)arg1 ;
-(void)setSupportsInlineVideo:(BOOL)arg1 ;
-(BOOL)supportsSms;
-(id)stringFromBool:(BOOL)arg1 ;
-(BOOL)supportsTel;
-(BOOL)supportsCalendar;
-(BOOL)supportsStorePicture;
-(BOOL)supportsInlineVideo;
-(id)description;
@end
