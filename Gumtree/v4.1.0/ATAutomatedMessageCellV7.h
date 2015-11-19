/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ATBaseMessageCellV7.h>

@class UILabel, UIImageView, ATAutomatedMessage;

@interface ATAutomatedMessageCellV7 : ATBaseMessageCellV7 {

	UILabel* _messageLabel;
	UIImageView* _appIcon;
	ATAutomatedMessage* _message;

}

@property (nonatomic,retain) UILabel * messageLabel;                    //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * appIcon;                     //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,retain) ATAutomatedMessage * message;              //@synthesize message=_message - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(ATAutomatedMessage *)message;
-(UILabel *)messageLabel;
-(void)setMessage:(ATAutomatedMessage *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setup;
-(UIImageView *)appIcon;
-(void)setAppIcon:(UIImageView *)arg1 ;
@end

