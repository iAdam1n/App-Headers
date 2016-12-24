/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MNNewThreadViewControllerConfigurationBuilder : NSObject {

	NSArray* _pickedContacts;
	NSArray* _hoistedUserIds;
	NSString* _initialComposerExtensionIdentifier;
	BOOL _disableSuggestions;
	BOOL _initialFlowersBorderModeEnabled;

}
+(id)newThreadViewControllerConfiguration;
+(id)newThreadViewControllerConfigurationFromExistingNewThreadViewControllerConfiguration:(id)arg1 ;
-(id)withInitialFlowersBorderModeEnabled:(BOOL)arg1 ;
-(id)withHoistedUserIds:(id)arg1 ;
-(id)withPickedContacts:(id)arg1 ;
-(id)withInitialComposerExtensionIdentifier:(id)arg1 ;
-(id)withDisableSuggestions:(BOOL)arg1 ;
-(id)build;
@end
