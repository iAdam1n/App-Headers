/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface SubredditFolder : NSObject <NSCoding> {

	BOOL _collapsed;
	NSMutableArray* _subreddits;
	NSString* _title;
	NSString* _ident;

}

@property (retain) NSMutableArray * subreddits;              //@synthesize subreddits=_subreddits - In the implementation block
@property (retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (retain) NSString * ident;                         //@synthesize ident=_ident - In the implementation block
@property (assign) BOOL collapsed;                           //@synthesize collapsed=_collapsed - In the implementation block
+(id)folderWithTitle:(id)arg1 ;
-(void)setIdent:(NSString *)arg1 ;
-(NSMutableArray *)subreddits;
-(BOOL)containsSubreddit:(id)arg1 ;
-(id)aggregateUrl;
-(void)setSubreddits:(NSMutableArray *)arg1 ;
-(id)itemMatchingSubreddit:(id)arg1 ;
-(void)insertSubreddit:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addSubreddit:(id)arg1 ;
-(void)removeSubreddit:(id)arg1 ;
-(void)sortAlphabetically;
-(NSString *)ident;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)collapsed;
-(void)setCollapsed:(BOOL)arg1 ;
@end
