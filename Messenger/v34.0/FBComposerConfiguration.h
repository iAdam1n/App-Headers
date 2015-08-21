/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@interface FBComposerConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _audienceEnabled;
	BOOL _filtersEnabled;
	BOOL _autoEnhanceDefaultValue;
	BOOL _stickersEnabled;
	BOOL _textOnPhotosEnabled;
	BOOL _unifiedGalleryViewEnabled;
	BOOL _loopsEnabled;
	BOOL _collageEnabled;

}

@property (nonatomic,readonly) BOOL audienceEnabled;                        //@synthesize audienceEnabled=_audienceEnabled - In the implementation block
@property (nonatomic,readonly) BOOL filtersEnabled;                         //@synthesize filtersEnabled=_filtersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL autoEnhanceDefaultValue;                //@synthesize autoEnhanceDefaultValue=_autoEnhanceDefaultValue - In the implementation block
@property (nonatomic,readonly) BOOL stickersEnabled;                        //@synthesize stickersEnabled=_stickersEnabled - In the implementation block
@property (nonatomic,readonly) BOOL textOnPhotosEnabled;                    //@synthesize textOnPhotosEnabled=_textOnPhotosEnabled - In the implementation block
@property (nonatomic,readonly) BOOL unifiedGalleryViewEnabled;              //@synthesize unifiedGalleryViewEnabled=_unifiedGalleryViewEnabled - In the implementation block
@property (nonatomic,readonly) BOOL loopsEnabled;                           //@synthesize loopsEnabled=_loopsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL collageEnabled;                         //@synthesize collageEnabled=_collageEnabled - In the implementation block
-(BOOL)collageEnabled;
-(BOOL)loopsEnabled;
-(BOOL)audienceEnabled;
-(id)initWithAudienceEnabled:(BOOL)arg1 filtersEnabled:(BOOL)arg2 autoEnhanceDefaultValue:(BOOL)arg3 stickersEnabled:(BOOL)arg4 textOnPhotosEnabled:(BOOL)arg5 unifiedGalleryViewEnabled:(BOOL)arg6 loopsEnabled:(BOOL)arg7 collageEnabled:(BOOL)arg8 ;
-(BOOL)filtersEnabled;
-(BOOL)autoEnhanceDefaultValue;
-(BOOL)stickersEnabled;
-(BOOL)textOnPhotosEnabled;
-(BOOL)unifiedGalleryViewEnabled;
@end

