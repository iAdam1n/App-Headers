/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUMessageHeaderView.h>

@class UILabel, FrameView;

@interface EBUReminderHeaderView : EBUMessageHeaderView {

	UILabel* _subjectTitleLabel;
	UILabel* _subjectLabel;
	FrameView* _divider1;

}

@property (nonatomic,retain) UILabel * subjectTitleLabel;              //@synthesize subjectTitleLabel=_subjectTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subjectLabel;                   //@synthesize subjectLabel=_subjectLabel - In the implementation block
@property (nonatomic,retain) FrameView * divider1;                     //@synthesize divider1=_divider1 - In the implementation block
-(void)setDivider1:(FrameView *)arg1 ;
-(FrameView *)divider1;
-(id)initWithSubject:(id)arg1 ;
-(void)setSubjectTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subjectTitleLabel;
-(void)commonInitWithSubject:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)subjectLabel;
-(void)setSubjectLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
@end
