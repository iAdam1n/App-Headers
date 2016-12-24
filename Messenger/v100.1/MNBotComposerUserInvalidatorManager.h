/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNUserInvalidating;
@class FBPersistentCache;

@interface MNBotComposerUserInvalidatorManager : NSObject {

	id<MNUserInvalidating> _userInvalidator;
	FBPersistentCache* _persistentCache;

}
-(BOOL)_shouldForceInvalidationForPageUser:(id)arg1 ;
-(id)initWithUserInvalidator:(id)arg1 ;
-(void)invalidatePageUserIfNeeded:(id)arg1 ;
@end
