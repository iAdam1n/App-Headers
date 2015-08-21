/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBContactSyncUserPhoneNumber : FBValueObject <NSCopying> {

	BOOL _isVerified;
	NSString* _label;
	NSString* _countryCode;
	NSString* _display_number;
	NSString* _national_number;
	NSString* _universal_number;

}

@property (nonatomic,readonly) BOOL isVerified;                               //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                   //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * display_number;                //@synthesize display_number=_display_number - In the implementation block
@property (nonatomic,copy,readonly) NSString * national_number;               //@synthesize national_number=_national_number - In the implementation block
@property (nonatomic,copy,readonly) NSString * universal_number;              //@synthesize universal_number=_universal_number - In the implementation block
-(BOOL)isVerified;
-(id)initWithIsVerified:(BOOL)arg1 label:(id)arg2 countryCode:(id)arg3 display_number:(id)arg4 national_number:(id)arg5 universal_number:(id)arg6 ;
-(NSString *)display_number;
-(NSString *)national_number;
-(NSString *)universal_number;
-(NSString *)label;
-(NSString *)countryCode;
@end

