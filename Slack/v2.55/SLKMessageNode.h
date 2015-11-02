/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/ASDisplayNode.h>

@protocol SLKMessageNodeDelegate;
@class SLKMessageDrawParameters, ASNetworkImageNode, SLKLink, NSTimer, NSDictionary, NSArray;

@interface SLKMessageNode : ASDisplayNode {

	id<SLKMessageNodeDelegate> _delegate;
	SLKMessageDrawParameters* _parameters;
	ASNetworkImageNode* _avatarImageNode;
	SLKLink* _touchedLink;
	NSTimer* _touchTimer;
	NSDictionary* _attachmentFrames;
	NSDictionary* _attachmentImageFrames;
	NSArray* _gifImageViewNodes;

}

@property (assign,nonatomic,__weak) id<SLKMessageNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SLKMessageDrawParameters * parameters;                   //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) ASNetworkImageNode * avatarImageNode;                    //@synthesize avatarImageNode=_avatarImageNode - In the implementation block
@property (retain) SLKLink * touchedLink;                                             //@synthesize touchedLink=_touchedLink - In the implementation block
@property (retain) NSTimer * touchTimer;                                              //@synthesize touchTimer=_touchTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentFrames;                         //@synthesize attachmentFrames=_attachmentFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * attachmentImageFrames;                    //@synthesize attachmentImageFrames=_attachmentImageFrames - In the implementation block
@property (nonatomic,retain) NSArray * gifImageViewNodes;                             //@synthesize gifImageViewNodes=_gifImageViewNodes - In the implementation block
+(CGRect)timestampFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(double)initialXForParameters:(id)arg1 ;
+(double)initialYForParameters:(id)arg1 ;
+(double)topAttachmentPaddingForParameters:(id)arg1 ;
+(/*^block*/id)attachmentDrawRect;
+(CGSize)sizeWithParameters:(id)arg1 constrainedToSize:(CGSize)arg2 ;
+(CGRect)usernameFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(void)drawMessageAssets:(id)arg1 withContext:(CGContextRef)arg2 rect:(CGRect)arg3 ;
+(CGRect)botFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(CGRect)tapToResendFrameForParameters:(id)arg1 inRect:(CGRect)arg2 ;
+(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 isCancelled:(/*^block*/id)arg3 isRasterizing:(BOOL)arg4 ;
-(void)addAnimatedGifEmojiSubviews;
-(id)emojiNodes;
-(void)updateGifAttachmentImageNodes;
-(void)updateAttachmentRects;
-(id)attachmentIdTouchedAtLocation:(CGPoint)arg1 ;
-(void)expandAttachmentWithId:(id)arg1 ;
-(void)downloadAttachmentImages;
-(void)updateAttachments;
-(void)showMoreAttachmentWithId:(id)arg1 ;
-(void)showLessAttachmentWithId:(id)arg1 ;
-(SLKLink *)touchedLink;
-(void)setTouchedLink:(SLKLink *)arg1 ;
-(NSDictionary *)attachmentFrames;
-(void)setAttachmentFrames:(NSDictionary *)arg1 ;
-(void)setAttachmentImageFrames:(NSDictionary *)arg1 ;
-(NSArray *)gifImageViewNodes;
-(void)setGifImageViewNodes:(NSArray *)arg1 ;
-(NSDictionary *)attachmentImageFrames;
-(void)setAvatarImageNode:(ASNetworkImageNode *)arg1 ;
-(ASNetworkImageNode *)avatarImageNode;
-(void)updateNodeForParameters;
-(void)updateAvatarImageNode;
-(id)linkForTouchAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(id)linkForTouch:(id)arg1 ;
-(void)touchHeld:(id)arg1 ;
-(void)invalidateTimer;
-(void)invalidateLink;
-(void)invalidateLinkAndRedraw;
-(id)drawParametersForAsyncLayer:(id)arg1 ;
-(void)setTouchTimer:(NSTimer *)arg1 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<SLKMessageNodeDelegate>)arg1 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SLKMessageNodeDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layout;
-(SLKMessageDrawParameters *)parameters;
-(void)setParameters:(SLKMessageDrawParameters *)arg1 ;
-(void)addSubnode:(id)arg1 ;
-(NSTimer *)touchTimer;
@end
