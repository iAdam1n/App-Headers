/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedDonationForFundraiserFieldsProtocol;
@class FBUserSession, UIImageView, FBNetworkImageView, UILabel, FBMemModelObject;

@interface FBFacecastDonateEventView : UIView {

	FBUserSession* _session;
	UIImageView* _donationEventImageView;
	FBNetworkImageView* _donorProfileImageView;
	UIImageView* _anonymousDonorProfileImageView;
	UILabel* _donateTextLabel;
	unsigned long long _style;
	FBMemModelObject*<FBQueriedDonationForFundraiserFieldsProtocol> _donation;

}

@property (assign,nonatomic) unsigned long long style;                                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBQueriedDonationForFundraiserFieldsProtocol> donation;              //@synthesize donation=_donation - In the implementation block
+(CGSize)sizeWithinBounds:(CGSize)arg1 ;
+(id)_textLabelWithStyle:(unsigned long long)arg1 font:(id)arg2 ;
+(id)_donateTextWithFundraiser:(id)arg1 ;
+(double)_viewHeight;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(FBMemModelObject*<FBQueriedDonationForFundraiserFieldsProtocol>)donation;
-(void)setDonation:(FBMemModelObject*<FBQueriedDonationForFundraiserFieldsProtocol>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end
