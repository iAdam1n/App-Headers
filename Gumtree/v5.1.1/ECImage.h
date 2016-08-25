/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Gumtree/ECMedia.h>

@class UIImage, NSData, NSArray, NSURL, NSString;

@interface ECImage : NSObject <NSCoding, ECMedia> {

	BOOL _urlsRequested;
	NSData* _jpeg;
	UIImage* _image;
	NSArray* _representations;
	NSURL* _assetURL;
	NSString* _localIdentifier;

}

@property (nonatomic,retain) NSData * jpeg;                           //@synthesize jpeg=_jpeg - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSArray * representations;               //@synthesize representations=_representations - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (assign,nonatomic) BOOL urlsRequested;                      //@synthesize urlsRequested=_urlsRequested - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageWithUIImage:(id)arg1 ;
-(void)setRepresentations:(NSArray *)arg1 ;
-(NSData *)jpeg;
-(id)urlStringOfLargestRepresentation;
-(id)urlStringForSize:(CGSize)arg1 ;
-(id)urlStringForSize:(CGSize)arg1 firstIndexToConsider:(unsigned long long)arg2 ;
-(id)sizeAtIndex:(unsigned long long)arg1 ;
-(void)setJpeg:(NSData *)arg1 ;
-(void)sortRepresentations;
-(BOOL)hasURLs;
-(id)relAtIndex:(unsigned long long)arg1 ;
-(BOOL)urlsRequested;
-(void)setUrlsRequested:(BOOL)arg1 ;
-(id)urlStringForTransformableSize:(CGSize)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(UIImage *)image;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)localIdentifier;
-(NSURL *)assetURL;
-(NSArray *)representations;
-(void)setLocalIdentifier:(NSString *)arg1 ;
@end

