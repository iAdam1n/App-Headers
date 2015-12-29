//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPAttachmentChatCell.h"

@interface SKPGenericMediaFallbackChatCell : SKPAttachmentChatCell
{
    _Bool _useThumbnailLayout;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 whenConstrainedToWidth:(double)arg2 traitCollection:(id)arg3;
+ (id)observedKeyPaths;
@property(nonatomic) _Bool useThumbnailLayout; // @synthesize useThumbnailLayout=_useThumbnailLayout;
- (id)placeholderImage;
- (void)updateThumbnail:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)changeAttachmentViewSize:(double)arg1;
- (void)refreshDueToChangeInViewModelProperty:(id)arg1;
- (id)contentAccessibilityHint;
- (id)contentAccessibilityString;
- (id)initWithFrame:(struct CGRect)arg1;

@end
