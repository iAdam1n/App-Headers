/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPListItemTableViewCell.h>

@class MKButton;

@interface SKPShareContactsContactTableViewCell : SKPListItemTableViewCell {

	BOOL _showSendContactRequestButton;
	MKButton* _iconButton;
	/*^block*/id _iconActionBlock;

}

@property (nonatomic,readonly) MKButton * iconButton;                        //@synthesize iconButton=_iconButton - In the implementation block
@property (assign,nonatomic) BOOL showSendContactRequestButton;              //@synthesize showSendContactRequestButton=_showSendContactRequestButton - In the implementation block
@property (nonatomic,copy) id iconActionBlock;                               //@synthesize iconActionBlock=_iconActionBlock - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)sendContactRequest:(id)arg1 ;
-(void)setShowSendContactRequestButton:(BOOL)arg1 ;
-(void)setIconActionBlock:(id)arg1 ;
-(void)mk_commonInit;
-(BOOL)showSendContactRequestButton;
-(id)iconActionBlock;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(MKButton *)iconButton;
@end
