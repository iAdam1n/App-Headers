/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/MNGMRProperty.h>

@interface MNGMRSupportsProperty : MNGMRProperty {

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
+(id)propertyWithSupportedFeaturesDictionary:(id)arg1 ;
+(id)supportedFeatures;
-(BOOL)supportsTel;
-(BOOL)supportsCalendar;
-(BOOL)supportsInlineVideo;
-(BOOL)supportsStorePicture;
-(void)setSupportsSms:(BOOL)arg1 ;
-(void)setSupportsTel:(BOOL)arg1 ;
-(void)setSupportsCalendar:(BOOL)arg1 ;
-(void)setSupportsStorePicture:(BOOL)arg1 ;
-(void)setSupportsInlineVideo:(BOOL)arg1 ;
-(BOOL)supportsSms;
-(id)javascriptBooleanStringFromBoolValue:(BOOL)arg1 ;
-(id)description;
@end
