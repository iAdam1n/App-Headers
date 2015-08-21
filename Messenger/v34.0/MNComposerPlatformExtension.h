/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNPlatformAppActionHandlerListener.h>

@class FBUserSession, MNPlatformAppItem, MNPlatformAppActionHandler, MNPlatformAppActionFactory, MNPlatformAppManager, MNPlatformAppsRankingGating, MNComposerBadgeExperimentContext, MNComposerExtensionStateManager, NSString;

@interface MNComposerPlatformExtension : MNAbstractComposerTrayExtension <MNPlatformAppActionHandlerListener> {

	FBUserSession* _session;
	MNPlatformAppItem* _appItem;
	MNPlatformAppActionHandler* _actionHandler;
	MNPlatformAppActionFactory* _platformAppActionFactory;
	MNPlatformAppManager* _platformAppManager;
	MNPlatformAppsRankingGating* _platformAppsRankingGating;
	MNComposerBadgeExperimentContext* _badgeExperimentContext;
	MNComposerExtensionStateManager* _extensionStateManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentation;
-(BOOL)isEligible;
-(id)_composerIcon;
-(void)didSelect:(BOOL)arg1 source:(long long)arg2 ;
-(BOOL)shouldPresent:(BOOL)arg1 source:(long long)arg2 ;
-(void)actionHandlerDidOpenURLReplyWithAttributionID:(id)arg1 ;
-(void)actionHandlerDidDismissWithAttributionID:(id)arg1 ;
-(BOOL)_shouldShowBadge;
-(void)_logPlatformAction:(id)arg1 ;
-(id)_platformAppID;
-(id)initWithSession:(id)arg1 appItem:(id)arg2 actionHandler:(id)arg3 platformActionFactory:(id)arg4 platformAppManager:(id)arg5 extensionStateManager:(id)arg6 badgeExperimentContext:(id)arg7 ;
-(BOOL)appIsInstalled;
-(long long)category;
-(id)tabBarItem;
-(BOOL)isThirdParty;
-(id)extensionIdentifier;
@end

