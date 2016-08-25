/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECMedia.h>

@class NSString, UIImage;

@interface ECMovie : NSObject <ECMedia> {

	NSString* _link;
	long long _type;

}

@property (nonatomic,retain) NSString * link;                       //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * image; 
+(id)videoIdForYouTubeLink:(id)arg1 ;
-(id)initWithECAPIVideo:(id)arg1 ;
-(BOOL)isYouTube;
-(id)youTubeId;
-(NSString *)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(UIImage *)image;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(BOOL)isSupported;
@end

