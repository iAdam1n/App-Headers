/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseView.h>
#import <Reddit/ThemeUpdateCallbackProtocol.h>

@protocol LiveUpdateEmbedViewDelegate;
@class NSArray, NSString;

@interface LiveUpdateEmbedView : BaseView <ThemeUpdateCallbackProtocol> {

	id<LiveUpdateEmbedViewDelegate> _delegate;
	NSArray* _embeds;

}

@property (nonatomic,copy) NSArray * embeds;                                               //@synthesize embeds=_embeds - In the implementation block
@property (assign,nonatomic,__weak) id<LiveUpdateEmbedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithEmbedData:(id)arg1 ;
-(void)setEmbeds:(NSArray *)arg1 ;
-(void)themeDidChange:(id)arg1 ;
-(NSArray *)embeds;
-(id)init;
-(void)setDelegate:(id<LiveUpdateEmbedViewDelegate>)arg1 ;
-(void)dealloc;
-(id<LiveUpdateEmbedViewDelegate>)delegate;
-(void)prepareForReuse;
@end
