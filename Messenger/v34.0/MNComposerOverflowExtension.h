/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNAbstractComposerTrayExtension.h>
#import <Messenger/MNComposerOverflowTabViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNModalPresentation;
@class MNComposerOverflowTabViewController, MNPlatformComposerGatingChecker, MNPhotoImageRequester, UIViewController, FBUserSession, MNComposerBadgeExperimentContext, MNComposerIconColourExperimentContext, NSArray, NSString;

@interface MNComposerOverflowExtension : MNAbstractComposerTrayExtension <MNComposerOverflowTabViewControllerDelegate, FBClassProvidable> {

	id<FBProvider> _composerOverflowTabViewControllerProvider;
	MNComposerOverflowTabViewController* _composerOverflowTabViewController;
	MNPlatformComposerGatingChecker* _platformComposerGatingChecker;
	id<MNModalPresentation> _modalPresenter;
	MNPhotoImageRequester* _imageRequester;
	UIViewController* _presentedNavigationController;
	FBUserSession* _session;
	MNComposerBadgeExperimentContext* _badgeExperimentContext;
	MNComposerIconColourExperimentContext* _iconColorExperimentContext;
	NSArray* _extensions;
	unsigned long long _badgeCount;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowExtensionDelegate> delegate; 
@property (nonatomic,copy) NSArray * extensions;                                                   //@synthesize extensions=_extensions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeCount;                                        //@synthesize badgeCount=_badgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewControllerForPresentation;
-(void)_updateComposerOverflowTabViewController;
-(void)_presentOverflowTabAsModal;
-(void)_initModalNavigationControllerIfNeeded;
-(void)_dismissModalOverflowTabWithCompletion:(/*^block*/id)arg1 ;
-(void)_initComposerOverflowTabViewControllerIfNeeded;
-(BOOL)_isModalOverflowTabPresented;
-(void)dismissModalOverflowTabIfPresented;
-(void)composerOverflowTabViewControllerDidAppear:(id)arg1 ;
-(void)composerOverflowTabViewControllerDidBecomeActive;
-(void)composerOverflowTabViewController:(id)arg1 didSelectItemWithExtensionIdentifier:(id)arg2 ;
-(void)composerOverflowTabViewController:(id)arg1 didSelectContent:(id)arg2 ;
-(void)_initComposerIconExperimentContextIfNecessary;
-(void)_initComposerBadgeExperimentContextIfNecessary;
-(id)_composerIcon;
-(void)updateOverflownTabBarItems;
-(void)didSelect:(BOOL)arg1 source:(long long)arg2 ;
-(BOOL)shouldPresent:(BOOL)arg1 source:(long long)arg2 ;
-(long long)category;
-(id)tabBarItem;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
-(void)setExtensions:(NSArray *)arg1 ;
-(NSArray *)extensions;
-(id)extensionIdentifier;
@end

