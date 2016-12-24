/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@protocol SLKMessageViewDelegate;
@class SLKMessageDrawParameters, TSFLink, NSTimer, UIImageView, NSDictionary, NSArray, SLKDependencies;

@interface SLKMessageView : UIView {

	id<SLKMessageViewDelegate> _delegate;
	SLKMessageDrawParameters* _parameters;
	TSFLink* _touchedLink;
	NSTimer* _touchTimer;
	double _lastEvent;
	UIImageView* _avatarImageView;
	NSDictionary* _attachmentFrames;
	NSDictionary* _attachmentImageFrames;
	NSDictionary* _attachmentButtonFrames;
	NSArray* _gifImageViews;
	NSArray* _attachmentButtons;
	SLKDependencies* _dependencies;

}

@property (retain) NSTimer * touchTimer;                                              //@synthesize touchTimer=_touchTimer - In the implementation block
@property (assign,nonatomic) double lastEvent;                                        //@synthesize lastEvent=_lastEvent - In the implementation block
@property (nonatomic,retain) UIImageView * avatarImageView;                           //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentFrames;                         //@synthesize attachmentFrames=_attachmentFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentImageFrames;                    //@synthesize attachmentImageFrames=_attachmentImageFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentButtonFrames;                   //@synthesize attachmentButtonFrames=_attachmentButtonFrames - In the implementation block
@property (nonatomic,retain) NSArray * gifImageViews;                                 //@synthesize gifImageViews=_gifImageViews - In the implementation block
@property (nonatomic,retain) NSArray * attachmentButtons;                             //@synthesize attachmentButtons=_attachmentButtons - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                   //@synthesize dependencies=_dependencies - In the implementation block
@property (assign,nonatomic,__weak) id<SLKMessageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SLKMessageDrawParameters * parameters;                   //@synthesize parameters=_parameters - In the implementation block
@property (retain) TSFLink * touchedLink;                                             //@synthesize touchedLink=_touchedLink - In the implementation block
+(double)initialXForParameters:(id)arg1 ;
+(CGRect)timestampFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(double)initialYForParameters:(id)arg1 ;
+(id)attachmentHeightsInRect:(CGRect)arg1 parameters:(id)arg2 ;
+(double)verticalPaddingForAttachmentAtIndex:(unsigned long long)arg1 fromAttachments:(id)arg2 ;
+(CGSize)sizeWithParameters:(id)arg1 constrainedToSize:(CGSize)arg2 dependencies:(id)arg3 ;
+(CGRect)avatarFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)usernameFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(double)attachmentHeightInRect:(CGRect)arg1 parameters:(id)arg2 ;
+(void)drawMessageAssets:(id)arg1 withContext:(CGContextRef)arg2 rect:(CGRect)arg3 ;
+(id)drawAttachmentInRect:(CGRect)arg1 parameters:(id)arg2 touchPoint:(CGPoint)arg3 link:(id*)arg4 ;
+(CGRect)userStatusFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)botFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)tapToResendFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)ephemeralFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)inChannelFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(double)usernameFrameRightPaddingForParameters:(id)arg1 ;
+(CGRect)smallTextFrameForParameters:(id)arg1 withAttributedString:(id)arg2 inRect:(CGRect)arg3 ;
+(double)attachmentHeightInRect:(CGRect)arg1 parameters:(id)arg2 touchPoint:(CGPoint)arg3 link:(id*)arg4 ;
+(id)headerImageForParams:(id)arg1 ;
+(id)headerImageForParams:(id)arg1 ;
+(id)drawAttachment:(BOOL)arg1 inRect:(CGRect)arg2 parameters:(id)arg3 touchPoint:(CGPoint)arg4 link:(id*)arg5 ;
+(double)drawText:(id)arg1 inRect:(CGRect)arg2 onContext:(CGContextRef)arg3 withAttributes:(id)arg4 touchedLink:(id)arg5 markdown:(BOOL)arg6 dependencies:(id)arg7 ;
+(id)thumbnailImageForParams:(id)arg1 ;
+(double)drawText:(id)arg1 withLinkRange:(NSRange)arg2 inRect:(CGRect)arg3 onContext:(CGContextRef)arg4 withAttributes:(id)arg5 ;
+(id)footerImageForParams:(id)arg1 ;
+(id)fullImageForParams:(id)arg1 ;
+(id)imageForSLKImage:(id)arg1 ;
+(double)topAttachmentPaddingForParameters:(id)arg1 ;
+(id)authorAttributedString:(id)arg1 titleAttributes:(id)arg2 subtitleAttributes:(id)arg3 ;
+(void)drawOnContext:(CGContextRef)arg1 block:(/*^block*/id)arg2 ;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(NSTimer *)touchTimer;
-(void)setTouchTimer:(NSTimer *)arg1 ;
-(void)setGifImageViews:(NSArray *)arg1 ;
-(UIImageView *)avatarImageView;
-(NSDictionary *)attachmentImageFrames;
-(void)updateAttachments;
-(id)emojiViews;
-(void)addAnimatedGifEmojiViews;
-(void)updateViewForParameters;
-(NSArray *)attachmentButtons;
-(void)updateAvatarImageView;
-(void)downloadAttachmentImages;
-(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 ;
-(id)linkForTouchAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)linkForTouch:(id)arg1 ;
-(void)setTouchedLink:(TSFLink *)arg1 ;
-(void)handleHeld:(id)arg1 ;
-(void)invalidateLink;
-(double)lastEvent;
-(void)setLastEvent:(double)arg1 ;
-(void)handleTouches:(id)arg1 ;
-(id)linkForPoint:(CGPoint)arg1 ;
-(TSFLink *)touchedLink;
-(void)expandAttachmentWithId:(id)arg1 ;
-(void)showMoreAttachmentWithId:(id)arg1 ;
-(void)showLessAttachmentWithId:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 forButton:(id)arg2 ;
-(NSDictionary *)attachmentFrames;
-(void)setAttachmentFrames:(NSDictionary *)arg1 ;
-(void)setAttachmentImageFrames:(NSDictionary *)arg1 ;
-(NSDictionary *)attachmentButtonFrames;
-(void)setAttachmentButtonFrames:(NSDictionary *)arg1 ;
-(NSArray *)gifImageViews;
-(void)setAttachmentButtons:(NSArray *)arg1 ;
-(void)addSubviewForEmoji:(id)arg1 withOrigin:(CGPoint)arg2 ;
-(id)attachmentIdTouchedAtLocation:(CGPoint)arg1 ;
-(void)didTapActionButton:(id)arg1 ;
-(void)updateGifAttachmentImageViews;
-(void)updateAttachmentRects;
-(void)updateAttachmentButtons;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SLKMessageViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SLKMessageViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(SLKMessageDrawParameters *)parameters;
-(void)setParameters:(SLKMessageDrawParameters *)arg1 ;
-(void)invalidateTimer;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
