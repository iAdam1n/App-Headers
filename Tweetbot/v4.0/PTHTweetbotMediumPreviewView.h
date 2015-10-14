/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, PTHTweetbotMedium;

@interface PTHTweetbotMediumPreviewView : UIControl {

	UIImageView* _imageView;
	PTHTweetbotMedium* _medium;

}

@property (nonatomic,readonly) PTHTweetbotMedium * medium;              //@synthesize medium=_medium - In the implementation block
-(id)initWithMedium:(id)arg1 ;
-(void)loadWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PTHTweetbotMedium *)medium;
@end

