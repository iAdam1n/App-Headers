/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol UILayoutSupport, TFNLayoutGuidesSource;
@interface TFNLayoutGuidesState : NSObject {

	id<UILayoutSupport> _topFixedLayoutSupport;
	id<UILayoutSupport> _bottomFixedLayoutSupport;
	id<UILayoutSupport> _topVisibleLayoutSupport;
	id<UILayoutSupport> _bottomVisibleLayoutSupport;
	id<TFNLayoutGuidesSource> _source;

}

@property (assign,nonatomic,__weak) id<TFNLayoutGuidesSource> source;              //@synthesize source=_source - In the implementation block
-(id)lastInheritedLayoutSupportForLayoutGuide:(long long)arg1 ;
-(void)setLastInheritedLayoutSupport:(id)arg1 forLayoutGuide:(long long)arg2 ;
-(id<TFNLayoutGuidesSource>)source;
-(void)setSource:(id<TFNLayoutGuidesSource>)arg1 ;
@end

