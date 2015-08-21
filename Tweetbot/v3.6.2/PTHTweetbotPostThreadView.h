/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, PTHTweetbotPostDraft;

@interface PTHTweetbotPostThreadView : UIView {

	NSMutableArray* _threadViews;
	NSMutableArray* _threadConstraints;
	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(PTHTweetbotPostDraft *)draft;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
@end

