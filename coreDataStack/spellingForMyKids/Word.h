//
//  Word.h
//  coreDataStack
//
//  Created by Olivier Delecueillerie on 08/09/2014.
//  Copyright (c) 2014 Olivier Delecueillerie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Grapheme, Kid, Phoneme, Spelling, Test;

@interface Word : NSManagedObject

@property (nonatomic, retain) NSData * audio;
@property (nonatomic, retain) NSData * image;
@property (nonatomic, retain) NSNumber * level;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *graphems;
@property (nonatomic, retain) NSSet *kids;
@property (nonatomic, retain) NSOrderedSet *phonemes;
@property (nonatomic, retain) NSSet *spelling;
@property (nonatomic, retain) Test *tests;
@end

@interface Word (CoreDataGeneratedAccessors)

- (void)addGraphemsObject:(Grapheme *)value;
- (void)removeGraphemsObject:(Grapheme *)value;
- (void)addGraphems:(NSSet *)values;
- (void)removeGraphems:(NSSet *)values;

- (void)addKidsObject:(Kid *)value;
- (void)removeKidsObject:(Kid *)value;
- (void)addKids:(NSSet *)values;
- (void)removeKids:(NSSet *)values;

- (void)insertObject:(Phoneme *)value inPhonemesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromPhonemesAtIndex:(NSUInteger)idx;
- (void)insertPhonemes:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removePhonemesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInPhonemesAtIndex:(NSUInteger)idx withObject:(Phoneme *)value;
- (void)replacePhonemesAtIndexes:(NSIndexSet *)indexes withPhonemes:(NSArray *)values;
- (void)addPhonemesObject:(Phoneme *)value;
- (void)removePhonemesObject:(Phoneme *)value;
- (void)addPhonemes:(NSOrderedSet *)values;
- (void)removePhonemes:(NSOrderedSet *)values;
- (void)addSpellingObject:(Spelling *)value;
- (void)removeSpellingObject:(Spelling *)value;
- (void)addSpelling:(NSSet *)values;
- (void)removeSpelling:(NSSet *)values;

@end
