/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNPullToLoadTopControl <NSObject>
@property (assign,nonatomic) BOOL loading; 
@property (assign,nonatomic) BOOL managesScrollViewContentInset; 
@property (assign,nonatomic) CGSize controlOffset; 
@property (assign,nonatomic) BOOL hideWhenNotInUse; 
@property (assign,nonatomic) double thresholdOffsetY; 
@required
-(void)setThresholdOffsetY:(double)arg1;
-(void)setManagesScrollViewContentInset:(BOOL)arg1;
-(void)setHideWhenNotInUse:(BOOL)arg1;
-(void)setLoading:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)scrollViewContentInsetDidReset:(id)arg1;
-(BOOL)managesScrollViewContentInset;
-(CGSize)controlOffset;
-(void)setControlOffset:(CGSize)arg1;
-(BOOL)hideWhenNotInUse;
-(double)thresholdOffsetY;
-(void)scrollViewDidScroll:(id)arg1;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)setLoading:(BOOL)arg1;
-(BOOL)loading;

@end

