/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBSyncPersonNameBuilder : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _displayName;

}
+(id)syncPersonName;
+(id)syncPersonNameFromExistingSyncPersonName:(id)arg1 ;
-(id)withFirstName:(id)arg1 ;
-(id)withLastName:(id)arg1 ;
-(id)withDisplayName:(id)arg1 ;
-(id)build;
@end
