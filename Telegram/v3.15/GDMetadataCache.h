/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GDMetadataCache <NSObject>
@required
-(id)metadataForURL:(id)arg1 directoryContents:(id*)arg2;
-(void)setMetadata:(id)arg1 forURL:(id)arg2 addToParent:(id)arg3;
-(void)setMetadata:(id)arg1 directoryContents:(id)arg2 forURL:(id)arg3 addToParent:(id)arg4;
-(id)directoryContentsForURL:(id)arg1;
-(id)metadataForURL:(id)arg1;
-(void)setMetadata:(id)arg1 forURL:(id)arg2;
-(void)removeMetadataForURL:(id)arg1 removeFromParent:(id)arg2;
-(void)setDirectoryContents:(id)arg1 forURL:(id)arg2;
-(id)directoryContentsMetadataArrayForURL:(id)arg1;
-(void)reset;

@end

