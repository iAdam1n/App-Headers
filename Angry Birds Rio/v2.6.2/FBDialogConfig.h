/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
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
+(id)dialogConfigWithDictionary:(id)arg1 ;
+(BOOL)useSafariViewControllerForDialogName:(id)arg1 ;
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

