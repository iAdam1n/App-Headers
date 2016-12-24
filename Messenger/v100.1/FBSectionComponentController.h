/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponent;

@interface FBSectionComponentController : NSObject {

	BOOL _hasLoaded;
	FBSectionComponent* _component;

}

@property (nonatomic,__weak,readonly) FBSectionComponent * component;              //@synthesize component=_component - In the implementation block
-(void)didLoad;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(void)willAttachComponent:(id)arg1 ;
-(FBSectionComponent *)component;
@end
