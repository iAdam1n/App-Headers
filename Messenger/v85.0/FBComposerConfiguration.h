/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _audienceEnabled;
	BOOL _filtersEnabled;
	BOOL _autoEnhanceDefaultValue;
	BOOL _stickersEnabled;
	BOOL _textOnPhotosEnabled;
	BOOL _doodlesEnabled;

}

@property (nonatomic,readonly) BOOL audienceEnabled;                      //@synthesize audienceEnabled=_audienceEnabled - In the implementation block
@property (nonatomic,readonly) BOOL filtersEnabled;                       //@synthesize filtersEnabled=_filtersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL autoEnhanceDefaultValue;              //@synthesize autoEnhanceDefaultValue=_autoEnhanceDefaultValue - In the implementation block
@property (nonatomic,readonly) BOOL stickersEnabled;                      //@synthesize stickersEnabled=_stickersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL textOnPhotosEnabled;                  //@synthesize textOnPhotosEnabled=_textOnPhotosEnabled - In the implementation block
@property (nonatomic,readonly) BOOL doodlesEnabled;                       //@synthesize doodlesEnabled=_doodlesEnabled - In the implementation block
-(id)initWithAudienceEnabled:(BOOL)arg1 filtersEnabled:(BOOL)arg2 autoEnhanceDefaultValue:(BOOL)arg3 stickersEnabled:(BOOL)arg4 textOnPhotosEnabled:(BOOL)arg5 doodlesEnabled:(BOOL)arg6 ;
-(BOOL)audienceEnabled;
-(BOOL)filtersEnabled;
-(BOOL)autoEnhanceDefaultValue;
-(BOOL)stickersEnabled;
-(BOOL)textOnPhotosEnabled;
-(BOOL)doodlesEnabled;
@end
