/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@interface TFNDownloadProcessor : NSObject {

	/*^block*/id _block;
	long long _options;

}

@property (nonatomic,copy) id block;                         //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
+(id)keyForImageWithSize:(CGSize)arg1 contentMode:(long long)arg2 ;
+(id)downloadProcessorForImageWithSize:(CGSize)arg1 contentMode:(long long)arg2 options:(long long)arg3 ;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

