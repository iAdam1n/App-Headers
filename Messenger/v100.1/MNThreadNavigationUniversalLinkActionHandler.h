/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNUniversalLinkActionHandler.h>

@protocol FBProvider;
@class FBAnalytics, NSString;

@interface MNThreadNavigationUniversalLinkActionHandler : NSObject <FBClassProvidable, MNUniversalLinkActionHandler> {

	id<FBProvider> _threadNavigationCoordinatorProvider;
	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _threadNavigationPostbackDataURLParserProvider;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)canHandleUniversalLink:(id)arg1 ;
-(BOOL)performActionForUniversalLink:(id)arg1 ;
-(id)initWithThreadNavigationCoordinatorProvider:(id)arg1 navigationCoordinatorProvider:(id)arg2 threadNavigationPostbackDataURLParserProvider:(id)arg3 analytics:(id)arg4 ;
@end
