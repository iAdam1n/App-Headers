/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol SLKImageCellDelegate, SLKMessageGenerics;
@class UIImageView, SLKImage, FLAnimatedImageView, UIView, UILabel, SLKReactionsView, DACircularProgressView, UITapGestureRecognizer;

@interface SLKImageCell : UITableViewCell {

	BOOL _isShowingFileTooBigImageBlocker;
	BOOL _isShowingFailedDownloadImageBlocker;
	BOOL _isShowingErrorImageBlocker;
	id<SLKImageCellDelegate> _delegate;
	id<SLKMessageGenerics> _message;
	UIImageView* _avatar;
	SLKImage* _image;
	UIImageView* _fileImageView;
	FLAnimatedImageView* _animatedImageView;
	UIView* _fileView;
	UILabel* _usernameLabel;
	UILabel* _timeLabel;
	UILabel* _titleLabel;
	UILabel* _downloadBlocker;
	UILabel* _failedDownloadBlocker;
	UILabel* _commentLabel;
	UILabel* _quoteLabel;
	SLKReactionsView* _reactionsView;
	DACircularProgressView* _progressView;
	UITapGestureRecognizer* _avatarTapGestureRecognizer;
	UITapGestureRecognizer* _imageTapGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<SLKImageCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SLKMessageGenerics> message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImageView * avatar;                                             //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) SLKImage * image;                                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * fileImageView;                                      //@synthesize fileImageView=_fileImageView - In the implementation block
@property (nonatomic,retain) FLAnimatedImageView * animatedImageView;                          //@synthesize animatedImageView=_animatedImageView - In the implementation block
@property (nonatomic,retain) UIView * fileView;                                                //@synthesize fileView=_fileView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                          //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                              //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * downloadBlocker;                                        //@synthesize downloadBlocker=_downloadBlocker - In the implementation block
@property (nonatomic,retain) UILabel * failedDownloadBlocker;                                  //@synthesize failedDownloadBlocker=_failedDownloadBlocker - In the implementation block
@property (nonatomic,retain) UILabel * commentLabel;                                           //@synthesize commentLabel=_commentLabel - In the implementation block
@property (nonatomic,retain) UILabel * quoteLabel;                                             //@synthesize quoteLabel=_quoteLabel - In the implementation block
@property (nonatomic,retain) SLKReactionsView * reactionsView;                                 //@synthesize reactionsView=_reactionsView - In the implementation block
@property (assign,nonatomic) BOOL isShowingFileTooBigImageBlocker;                             //@synthesize isShowingFileTooBigImageBlocker=_isShowingFileTooBigImageBlocker - In the implementation block
@property (assign,nonatomic) BOOL isShowingFailedDownloadImageBlocker;                         //@synthesize isShowingFailedDownloadImageBlocker=_isShowingFailedDownloadImageBlocker - In the implementation block
@property (assign,nonatomic) BOOL isShowingErrorImageBlocker;                                  //@synthesize isShowingErrorImageBlocker=_isShowingErrorImageBlocker - In the implementation block
@property (nonatomic,retain) DACircularProgressView * progressView;                            //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * avatarTapGestureRecognizer;              //@synthesize avatarTapGestureRecognizer=_avatarTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * imageTapGestureRecognizer;               //@synthesize imageTapGestureRecognizer=_imageTapGestureRecognizer - In the implementation block
+(double)heightWithMessage:(id)arg1 constraintToSize:(CGSize)arg2 ;
-(void)setAvatarImage:(id)arg1 ;
-(void)setAvatarTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)avatarTapGestureRecognizer;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)setReactionsView:(SLKReactionsView *)arg1 ;
-(SLKReactionsView *)reactionsView;
-(void)setupViewsWithCellWidth:(double)arg1 ;
-(id)fileImage;
-(void)imageTapped:(id)arg1 ;
-(void)messageDataUpdated:(id)arg1 ;
-(UIView *)fileView;
-(UITapGestureRecognizer *)imageTapGestureRecognizer;
-(void)resetViews;
-(void)downloadAvatar;
-(id)formattedDateForTimestamp:(id)arg1 ;
-(void)setFileImageForMessage:(id)arg1 ;
-(void)showInitialImageCommentIfNecessary:(id)arg1 ;
-(void)setIsShowingErrorImageBlocker:(BOOL)arg1 ;
-(void)cancelImageDownload;
-(void)dismissProgressView;
-(void)dismissDownloadBlocker;
-(void)dismissFailedDownloadBlocker;
-(FLAnimatedImageView *)animatedImageView;
-(void)setAnimatedImageView:(FLAnimatedImageView *)arg1 ;
-(UIImageView *)fileImageView;
-(void)setFileImageView:(UIImageView *)arg1 ;
-(UILabel *)quoteLabel;
-(void)setQuoteLabel:(UILabel *)arg1 ;
-(void)updateImageviewImage:(id)arg1 ;
-(BOOL)isImageDownloadable:(id)arg1 ;
-(void)downloadImage;
-(void)showFileSizeTooBigBlocker;
-(void)layoutCommentLabel;
-(void)showQuoteSymbol;
-(void)repositionQuoteSymbolIfNecessary;
-(void)updateImageviewImage:(id)arg1 withAnimation:(BOOL)arg2 ;
-(UILabel *)downloadBlocker;
-(UILabel *)failedDownloadBlocker;
-(void)setFailedDownloadBlocker:(UILabel *)arg1 ;
-(void)setIsShowingFailedDownloadImageBlocker:(BOOL)arg1 ;
-(void)setIsShowingFileTooBigImageBlocker:(BOOL)arg1 ;
-(void)setDownloadBlocker:(UILabel *)arg1 ;
-(BOOL)isShowingFileTooBigImageBlocker;
-(BOOL)isShowingFailedDownloadImageBlocker;
-(BOOL)isShowingErrorImageBlocker;
-(BOOL)hasDownloadedValidImage;
-(void)showFullScreenImage;
-(void)showFailedBlocker:(id)arg1 ;
-(void)setFileView:(UIView *)arg1 ;
-(void)setImageTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)updateCell;
-(void)avatarTapped:(id)arg1 ;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(UILabel *)commentLabel;
-(void)showLoadingIndicator;
-(void)setImage:(SLKImage *)arg1 ;
-(void)setDelegate:(id<SLKImageCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SLKImageCellDelegate>)delegate;
-(SLKImage *)image;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(id<SLKMessageGenerics>)message;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setProgressView:(DACircularProgressView *)arg1 ;
-(DACircularProgressView *)progressView;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setAvatar:(UIImageView *)arg1 ;
-(UIImageView *)avatar;
-(double)imageHeight;
@end
