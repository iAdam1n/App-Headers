/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSArray;

@interface FBDialogConfig : NSObject <NSCoding> {

	NSString* _name;
	NSURL* _URL;
	NSArray* _versions;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * versions;              //@synthesize versions=_versions - In the implementation block
+(void)updateDialogFlows;
+(BOOL)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2 ;
+(BOOL)useNativeDialogForDialogName:(id)arg1 ;
+(BOOL)useSafariViewControllerForDialogName:(id)arg1 ;
+(id)dialogConfigWithDictionary:(id)arg1 ;
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)versions;
-(void)setVersions:(NSArray *)arg1 ;
@end

