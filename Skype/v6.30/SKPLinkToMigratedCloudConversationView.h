/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class SKPAttributedLabel;

@interface SKPLinkToMigratedCloudConversationView : UIView {

	/*^block*/id _actionBlock;
	SKPAttributedLabel* _linkLabel;

}

@property (nonatomic,readonly) SKPAttributedLabel * linkLabel;              //@synthesize linkLabel=_linkLabel - In the implementation block
@property (nonatomic,copy) id actionBlock;                                  //@synthesize actionBlock=_actionBlock - In the implementation block
-(SKPAttributedLabel *)linkLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end
