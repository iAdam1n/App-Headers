/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class WAGroupMember, WAProfilePictureThumbnailView, NSString, WAContactNameLabel, UILabel, UIImageView;

@interface ContactTableViewCell : UITableViewCell {

	WAGroupMember* _groupMember;
	WAProfilePictureThumbnailView* _imageViewContact;
	BOOL _alwaysShowsPicture;
	BOOL _displaysWhatsAppContact;
	BOOL _useItalicsForStatusText;
	NSString* _jid;
	WAContactNameLabel* _nameLabel;
	UILabel* _statusLabel;
	UILabel* _detailLabel;
	WAContactNameLabel* _pushNameLabel;
	double _accessoryViewInset;
	unsigned long long _selectionState;

}

@property (nonatomic,copy) NSString * jid;                                      //@synthesize jid=_jid - In the implementation block
@property (nonatomic,readonly) UIImageView * imageViewContact; 
@property (nonatomic,readonly) WAContactNameLabel * nameLabel;                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) WAContactNameLabel * pushNameLabel;              //@synthesize pushNameLabel=_pushNameLabel - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsPicture;                           //@synthesize alwaysShowsPicture=_alwaysShowsPicture - In the implementation block
@property (assign,nonatomic) BOOL displaysWhatsAppContact;                      //@synthesize displaysWhatsAppContact=_displaysWhatsAppContact - In the implementation block
@property (assign,nonatomic) BOOL useItalicsForStatusText;                      //@synthesize useItalicsForStatusText=_useItalicsForStatusText - In the implementation block
@property (assign,nonatomic) double accessoryViewInset;                         //@synthesize accessoryViewInset=_accessoryViewInset - In the implementation block
@property (assign,nonatomic) unsigned long long selectionState;                 //@synthesize selectionState=_selectionState - In the implementation block
+(id)noContactsCell;
+(id)loadingContactsCell;
+(void)initialize;
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)reloadFonts;
-(void)setAlwaysShowsPicture:(BOOL)arg1 ;
-(void)configureWithWAFavorite:(id)arg1 ;
-(void)setDisplaysWhatsAppContact:(BOOL)arg1 ;
-(void)setUseItalicsForStatusText:(BOOL)arg1 ;
-(double)accessoryViewInset;
-(BOOL)alwaysShowsPicture;
-(BOOL)useItalicsForStatusText;
-(void)setSelectionState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)displaysWhatsAppContact;
-(WAContactNameLabel *)pushNameLabel;
-(UIImageView *)imageViewContact;
-(void)configureWithGroupMember:(id)arg1 ;
-(void)configureWithContactInfo:(id)arg1 ;
-(void)setAccessoryViewInset:(double)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(unsigned long long)selectionState;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(WAContactNameLabel *)nameLabel;
-(UILabel *)detailLabel;
-(UILabel *)statusLabel;
-(void)setSelectionState:(unsigned long long)arg1 ;
@end
