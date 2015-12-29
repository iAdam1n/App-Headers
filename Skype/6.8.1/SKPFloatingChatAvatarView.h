//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKReactiveCollectionReusableView.h"

@class MKImageView, SKPChatLayoutStylesheet, SKPImageBridgeViewController;

@interface SKPFloatingChatAvatarView : MKReactiveCollectionReusableView
{
    SKPImageBridgeViewController *_imageController;
    MKImageView *_imageView;
    CDUnknownBlockType _actionBlock;
    SKPChatLayoutStylesheet *_stylesheet;
    double _offset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) SKPChatLayoutStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) MKImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)prepareForReuse;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapGestureRecognized:(id)arg1;
@property(readonly, nonatomic) SKPImageBridgeViewController *imageController; // @synthesize imageController=_imageController;
- (id)initWithFrame:(struct CGRect)arg1;

@end
