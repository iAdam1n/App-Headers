/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSString, SLKDependencies, UIActivityIndicatorView, OLImageView;

@interface SLKAutoCompleteTableCell : UITableViewCell {

	BOOL _showUserStatus;
	BOOL _showUserName;
	BOOL _showLoading;
	BOOL _assistEnabled;
	NSString* _autocompleteCharacter;
	id _item;
	NSString* _detail;
	SLKDependencies* _dependencies;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) OLImageView * imageView; 
@property (nonatomic,retain) NSString * autocompleteCharacter;                             //@synthesize autocompleteCharacter=_autocompleteCharacter - In the implementation block
@property (nonatomic,retain) id item;                                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * detail;                                            //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL showUserStatus;                                          //@synthesize showUserStatus=_showUserStatus - In the implementation block
@property (assign,nonatomic) BOOL showUserName;                                            //@synthesize showUserName=_showUserName - In the implementation block
@property (assign,nonatomic) BOOL showLoading;                                             //@synthesize showLoading=_showLoading - In the implementation block
@property (assign,nonatomic) BOOL assistEnabled;                                           //@synthesize assistEnabled=_assistEnabled - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                        //@synthesize dependencies=_dependencies - In the implementation block
-(void)setShowUserStatus:(BOOL)arg1 ;
-(void)setShowUserName:(BOOL)arg1 ;
-(CGSize)suggestedImageSize;
-(void)specialLayoutForDetail;
-(void)configureLayout;
-(void)configureCommandLayout;
-(NSString *)autocompleteCharacter;
-(void)configureChannelLayout;
-(void)configureUserGroupLayout;
-(void)configureUserLayout;
-(void)configureEmojiLayout;
-(void)configureReactionLayout;
-(void)configureSlashCommandLayout;
-(void)configureSimpleLayout;
-(BOOL)showUserName;
-(BOOL)showUserStatus;
-(BOOL)assistEnabled;
-(void)setAutocompleteCharacter:(NSString *)arg1 ;
-(void)setShowLoading:(BOOL)arg1 ;
-(void)setAssistEnabled:(BOOL)arg1 ;
-(SLKDependencies *)dependencies;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)item;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(OLImageView *)imageView;
-(void)setDetail:(NSString *)arg1 ;
-(void)setItem:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(double)imageHeight;
-(BOOL)showLoading;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(NSString *)detail;
@end

