/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSMutableDictionary, EBULoadingToastView;

@interface EBUFeedHiddenStateEditingHelper : NSObject {

	UIView* _progressOverlayView;
	NSMutableDictionary* _hiddenEntitiesDictionary;
	EBULoadingToastView* _progressIndicator;

}

@property (nonatomic,retain) NSMutableDictionary * hiddenEntitiesDictionary;              //@synthesize hiddenEntitiesDictionary=_hiddenEntitiesDictionary - In the implementation block
@property (nonatomic,retain) EBULoadingToastView * progressIndicator;                     //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) UIView * progressOverlayView;                         //@synthesize progressOverlayView=_progressOverlayView - In the implementation block
@property (nonatomic,readonly) unsigned long long hiddenEntityCount; 
-(void)hideProgressIndicator;
-(void)changeFeedEntity:(id)arg1 hiddenState:(BOOL)arg2 ;
-(void)commitHiddenFeedEntitiesForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFeedEntities:(id)arg1 ;
-(void)updateWithFeedEntities:(id)arg1 ;
-(BOOL)isFeedEntityHidden:(id)arg1 ;
-(void)presentFeedEntityHiddenAlert:(id)arg1 unhideHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hiddenEntityCount;
-(UIView *)progressOverlayView;
-(void)setProgressOverlayView:(UIView *)arg1 ;
-(NSMutableDictionary *)hiddenEntitiesDictionary;
-(void)setHiddenEntitiesDictionary:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)showProgressIndicator;
-(EBULoadingToastView *)progressIndicator;
-(void)setProgressIndicator:(EBULoadingToastView *)arg1 ;
@end
