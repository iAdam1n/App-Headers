/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPhoneNumberMetadata.h>

@class FBCurrentCountryManager, NSSet, NSString;

@interface LPPhoneNumberMetadata : NSObject <FBPhoneNumberMetadata> {

	FBCurrentCountryManager* _currentCountryManager;
	NSSet* _validRegionCodes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_validateRegionCode:(id)arg1 ;
-(int)callingCodeForCountryCode:(id)arg1 ;
-(id)defaultCountryCode;
-(id)localizedCountryNameForCountryCode:(id)arg1 ;
-(id)init;
@end
