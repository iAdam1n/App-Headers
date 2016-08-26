/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPageVideoHubVideoCellModel : FBValueObject <NSCopying> {

	BOOL _metadataHidden;
	NSString* _metadataString;
	NSString* _videoTimeText;
	NSString* _videoTitle;
	NSString* _videoSubtitle;

}

@property (nonatomic,copy,readonly) NSString * metadataString;              //@synthesize metadataString=_metadataString - In the implementation block
@property (nonatomic,readonly) BOOL metadataHidden;                         //@synthesize metadataHidden=_metadataHidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoTimeText;               //@synthesize videoTimeText=_videoTimeText - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoTitle;                  //@synthesize videoTitle=_videoTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoSubtitle;               //@synthesize videoSubtitle=_videoSubtitle - In the implementation block
-(id)initWithMetadataString:(id)arg1 metadataHidden:(BOOL)arg2 videoTimeText:(id)arg3 videoTitle:(id)arg4 videoSubtitle:(id)arg5 ;
-(BOOL)metadataHidden;
-(NSString *)videoTimeText;
-(NSString *)videoSubtitle;
-(NSString *)metadataString;
-(NSString *)videoTitle;
@end
