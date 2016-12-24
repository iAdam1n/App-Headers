/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScrollPositionRestoringScrollViewListenerAnnouncer;


@protocol FBScrollPositionRestoringScrollViewController <NSObject>
@property (nonatomic,readonly) FBScrollPositionRestoringScrollViewListenerAnnouncer * listenerAnnouncer; 
@property (assign,nonatomic,__weak) id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider> restorationIndexPathProvider; 
@required
-(FBScrollPositionRestoringScrollViewListenerAnnouncer *)listenerAnnouncer;
-(void)setRestorationEnabled:(BOOL)arg1 forKey:(id)arg2;
-(BOOL)isRestorationEnabledForKey:(id)arg1;
-(id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider>)restorationIndexPathProvider;
-(void)setRestorationIndexPathProvider:(id)arg1;

@end
