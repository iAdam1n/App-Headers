/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>

@class S8Label, S8Button;

@interface NotificationSettingsInfoDialogView : XibDialogView {

	S8Label* _instruction1;
	S8Button* _acceptButton;
	S8Button* _closeButton;

}

@property (nonatomic,retain) S8Label * instruction1;               //@synthesize instruction1=_instruction1 - In the implementation block
@property (nonatomic,retain) S8Button * acceptButton;              //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) S8Button * closeButton;               //@synthesize closeButton=_closeButton - In the implementation block
+(id)cachedButtonPropertyNames;
+(void)load;
-(void)swizzle_viewWillAppear;
-(void)viewWillAppear;
-(S8Label *)instruction1;
-(void)accepted:(id)arg1 ;
-(void)setInstruction1:(S8Label *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)classIdentifier;
-(S8Button *)closeButton;
-(void)setCloseButton:(S8Button *)arg1 ;
-(S8Button *)acceptButton;
-(void)setAcceptButton:(S8Button *)arg1 ;
@end
